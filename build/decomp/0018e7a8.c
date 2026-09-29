// OoT3D decomp @ 0018e7a8  name=FUN_0018e7a8  size=516

void FUN_0018e7a8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;

  uVar1 = DAT_0018e9b4;
  FUN_00372d4c(DAT_0018e9b4,DAT_0018e9ac,param_1 + 0xbc,DAT_0018e9b0);
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0xdd8,param_1,DAT_0018e9b8);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018e9bc + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  uVar2 = ObjectBankArchive_00358ef8(iVar3 + 0x10,0);
  FUN_00353e78(iVar3 + 0x10,param_2,param_1 + 0x1a4,uVar2,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,param_1 + 0x228,param_1 + 0x708,0x18);
  FUN_0035c358(param_1 + 0xbe8,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  uVar4 = (int)*(short *)(param_1 + 0x1c) & 0xff;
  if (uVar4 == 2) {
    FUN_00347ed4(uVar1,param_1,DAT_0018e9c0,2,0);
    *(undefined4 *)(param_1 + 0xdb8) = 7;
  }
  else {
    if (uVar4 != 3) {
      if (uVar4 == 4) {
        iVar3 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x10) >> 0x18);
        if (iVar3 == 0) {
          FUN_00347ed4(uVar1,param_1,DAT_0018e9c8,0);
          *(undefined4 *)(param_1 + 0xdb8) = 0xe;
          *(undefined4 *)(param_1 + 0xdbc) = 1;
        }
        else {
          FUN_00374428(param_1);
        }
      }
      else {
        FUN_00347ed4(uVar1,param_1,DAT_0018e9c8,0);
        *(undefined4 *)(param_1 + 0xc4) = DAT_0018e9cc;
      }
      goto LAB_0018e994;
    }
    FUN_00347ed4(uVar1,param_1,DAT_0018e9c4,0);
    *(undefined4 *)(param_1 + 0xdb8) = 10;
    *(undefined4 *)(param_1 + 0xdbc) = 0;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
LAB_0018e994:
  *(undefined1 *)(param_1 + 0xdd2) = 0;
  *(undefined1 *)(param_1 + 0xdd3) = 3;
  return;
}
