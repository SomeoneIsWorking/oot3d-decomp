// OoT3D decomp @ 003666a0  name=FUN_003666a0  size=96

void FUN_003666a0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 unaff_r4;
  
  FUN_003665fc(0xe,1,0);
  FUN_003665fc(0xf,1,0);
  iVar4 = FUN_00366684(0);
  if ((iVar4 == -1) &&
     (*(undefined4 *)(iRam00366700 + 0x558) = 0x80, piVar2 = piRam00338f44,
     *(char *)(param_1 + 0x101) != '\0')) {
    *(undefined1 *)(param_1 + 0x3260) = 0xff;
    iVar4 = iRam00338f48;
    if (*piVar2 == 0x4de || *piVar2 == 0x5e0) {
      FUN_0033c7a4(4);
    }
    else if (*(int *)(iRam00338f48 + 0x554) == 0) {
      iVar4 = *(int *)(param_1 + 0xa68);
      if (iVar4 == 0) {
        FUN_003655d0(0);
      }
      else if (iVar4 == 0x7f) {
        if (*(char *)(param_1 + 0xa6c) == '\x13') {
          return;
        }
        if (*(char *)(param_1 + 0xa6c) != *(char *)(iRam00338f48 + 0x56e)) {
          FUN_0033c7a4();
        }
      }
      else {
        cVar1 = *(char *)(param_1 + 0xa6c);
        if (cVar1 == '\x13') {
          if (iVar4 != *(int *)(iRam00338f48 + 0x558)) {
            FUN_00331048(iVar4,0);
          }
        }
        else {
          if (*(ushort *)(piVar2 + 3) - 0x4aab < uRam00338f4c) {
            if (iVar4 != *(int *)(iRam00338f48 + 0x558)) {
              FUN_00331048(iVar4,0,uRam00338f4c,*(ushort *)(piVar2 + 3) - 0x4aab,unaff_r4);
            }
            uVar3 = 1;
          }
          else {
            if (cVar1 != *(char *)(iRam00338f48 + 0x56e)) {
              FUN_0033c7a4(cVar1);
            }
            if (*(ushort *)(piVar2 + 3) - 0xb71d < uRam00338f50) {
              uVar3 = 3;
            }
            else if (*(ushort *)(piVar2 + 3) - 0x4555 < uRam00338f5c) {
              uVar3 = 7;
            }
            else {
              uVar3 = 5;
            }
          }
          *(undefined1 *)(param_1 + 0x3260) = uVar3;
        }
      }
    }
    else {
      if (*(int *)(iRam00338f48 + 0x554) != 0xffff) {
        FUN_0036ec40(0);
      }
      *(undefined4 *)(iVar4 + 0x554) = 0;
    }
    *(ushort *)(iRam00338f58 + param_1) = (ushort)*(byte *)(iRam00338f54 + param_1);
    *(uint *)(param_1 + 0x7f28) = (uint)*(ushort *)(param_1 + 0x5000);
    *(uint *)(param_1 + 0x7f2c) = (uint)*(ushort *)(param_1 + 0x5002);
    return;
  }
  return;
}

