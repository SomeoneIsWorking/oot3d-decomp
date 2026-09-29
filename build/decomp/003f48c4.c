// OoT3D decomp @ 003f48c4  name=FUN_003f48c4  size=344

void FUN_003f48c4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;

  iVar1 = FUN_00350cf4(5);
  if (iVar1 == 0) {
    if (*(int *)(DAT_003f4a1c + 4) != 0) {
      iVar2 = FUN_00350cf4(0xc);
      iVar1 = DAT_003f4a28;
      if (iVar2 == 0) {
        iVar2 = FUN_0034cc28(DAT_003f4a24,param_1,DAT_003f4a38);
        if (iVar2 != 0) {
          FUN_0034cbf8(0xc);
          if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
             (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
             *(int *)(DAT_003f4a30 + iVar2) != 0)) {
            iVar2 = iVar2 + 0x3a5c;
          }
          else {
            iVar2 = 0;
          }
          uVar4 = FUN_00375750(iVar2 + 0x10,0);
          FUN_0037573c(param_2,uVar4);
          uVar4 = DAT_003f4a34;
          *(undefined1 *)(iVar1 + 0x5a2) = 1;
          *(undefined4 *)(param_1 + 0x1bc) = uVar4;
          return;
        }
      }
      else {
        iVar2 = FUN_0034cc28(DAT_003f4a24,param_1,DAT_003f4a2c);
        if (iVar2 != 0) {
          uVar3 = *(uint *)(param_1 + 4);
          *(uint *)(param_1 + 4) = uVar3 | 1;
          if (*(char *)(param_1 + 0x114) != '\0') {
            *(uint *)(param_1 + 4) = uVar3 & 0xfffffffe;
            if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
               (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
               *(int *)(DAT_003f4a30 + iVar2) != 0)) {
              iVar2 = iVar2 + 0x3a5c;
            }
            else {
              iVar2 = 0;
            }
            uVar4 = FUN_00375750(iVar2 + 0x10,1);
            FUN_0037573c(param_2,uVar4);
            uVar4 = DAT_003f4a34;
            *(undefined1 *)(iVar1 + 0x5a2) = 1;
            *(undefined4 *)(param_1 + 0x1bc) = uVar4;
            return;
          }
        }
      }
    }
  }
  else if (*(int *)(DAT_003f4a1c + 4) != 0) {
    *(undefined4 *)(param_1 + 0x1c0) = DAT_003f4a20;
  }
  return;
}
