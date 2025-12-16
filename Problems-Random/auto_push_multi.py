import os
import time
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

# ✅ Add your folders here (one line per folder)
WATCHED_FOLDERS = [
    "C:/Users/sirsw/Desktop/Codeforces/CF-Solutions",
    "C:/Users/sirsw/Desktop/Codechef",
    "C:/Users/sirsw/Desktop/Contests",
    "C:/Users/sirsw/Desktop/Course LU"
]

class GitHandler(FileSystemEventHandler):
    def on_any_event(self, event):
        if event.is_directory:
            return
        if event.event_type in ("created", "modified", "moved"):
            folder = os.path.dirname(event.src_path)
            print(f"🔄 Change detected in: {event.src_path}")
            os.chdir(folder)
            os.system('git add .')
            os.system('git commit -m "Auto-update: Solution"')
            os.system('git push')

if __name__ == "__main__":
    observers = []
    for folder in WATCHED_FOLDERS:
        if not os.path.exists(folder):
            print(f"⚠️ Folder does not exist: {folder}")
            continue
        observer = Observer()
        observer.schedule(GitHandler(), path=folder, recursive=True)
        observer.start()
        observers.append(observer)
        print(f"✅ Watching: {folder}")

    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        for observer in observers:
            observer.stop()
        print("🛑 Stopped watching.")
    for observer in observers:
        observer.join()
