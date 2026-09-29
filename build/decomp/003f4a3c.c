// OoT3D decomp @ 003f4a3c  name=FUN_003f4a3c  size=308

void FUN_003f4a3c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  uVar2 = DAT_003f4b78;
  iVar1 = DAT_003f4b70;
  iVar6 = DAT_003f4b70 + 0xd4;
  if (*(short *)(param_1 + 0x1bc) == 0) {
    iVar4 = FUN_0033f4cc(param_1,param_2);
    if (iVar4 != 0) {
      iVar5 = *(int *)(DAT_003f4b84 + param_2);
      if (*(char *)(param_1 + 0x1c6) != '\0') {
        uVar3 = (uint)*(ushort *)(iVar1 + 0x1592);
        if (*(char *)(param_1 + 0x1c2) == '\x05') {
          if (((uint)*(byte *)(uVar3 + DAT_003f4b88) & *DAT_003f4b8c) == 0) {
            *(short *)(iVar5 + 0x1728) = (short)DAT_003f4b90;
            return;
          }
        }
        else if (*(char *)(uVar3 + iVar6) < '\x01') {
          *(short *)(iVar5 + 0x1728) = (short)DAT_003f4b94;
          return;
        }
        *(undefined2 *)(DAT_003f4b98 + iVar5) = 0xf;
      }
      *(undefined1 *)(iVar5 + 0x12a4) = 2;
      *(char *)(iVar5 + 0x12a5) = (char)iVar4;
      *(int *)(iVar5 + 0x12a8) = param_1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1d0) = DAT_003f4b74;
    *(undefined2 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 100) = uVar2;
    if (*(char *)(param_1 + 0x1c6) != '\0') {
      FUN_00375c10(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      if (*(char *)(param_1 + 0x1c2) != '\x05') {
        uVar3 = (uint)*(ushort *)(iVar1 + 0x1592);
        *(char *)(uVar3 + iVar6) = *(char *)(uVar3 + iVar6) + -1;
        FUN_00375bcc(param_1,DAT_003f4b80);
        return;
      }
      FUN_0037547c(DAT_003f4b7c,param_1 + 0x28,4,DAT_00375c04);
      return;
    }
  }
  return;
}
