import time
import os
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import subprocess

WATCHED_EXTENSIONS = [".cpp"]

class GitAutoPushHandler(FileSystemEventHandler):
    def on_modified(self, event):
        if not event.is_directory and event.src_path.endswith(tuple(WATCHED_EXTENSIONS)):
            print(f"[+] Detected change in: {event.src_path}")
            self.auto_git_push()

    def on_created(self, event):
        if not event.is_directory and event.src_path.endswith(tuple(WATCHED_EXTENSIONS)):
            print(f"[+] Detected new file: {event.src_path}")
            self.auto_git_push()

    def auto_git_push(self):
        try:
            subprocess.run(["git", "add", "."], check=True)
            subprocess.run(["git", "commit", "-m", "Auto-push from script"], check=True)
            subprocess.run(["git", "push"], check=True)
            print("[✓] Changes pushed to GitHub.")
        except subprocess.CalledProcessError as e:
            print("[!] Git push failed:", e)

if __name__ == "__main__":
    folder_to_watch = r"C:/Users/sirsw/Desktop/Codeforces/CF-Solutions"
    event_handler = GitAutoPushHandler()
    observer = Observer()
    observer.schedule(event_handler, folder_to_watch, recursive=True)
    observer.start()
    print(f"[🔍] Watching for changes in: {folder_to_watch}")
    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        observer.stop()
    observer.join()
