import '../justfile'
import 'buildcommons/build.just'

scan:
    python3 scripts/protocolgen.py