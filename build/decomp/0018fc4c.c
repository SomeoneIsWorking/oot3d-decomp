// OoT3D decomp @ 0018fc4c  name=FUN_0018fc4c  size=424

void FUN_0018fc4c(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018fdf4 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xf54) = iVar3 + 0x10;
  FUN_00372d4c(DAT_0018fe00,DAT_0018fdf8,param_1 + 0xbc,DAT_0018fdfc);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0x108c,param_1,DAT_0018fe04);
  uVar4 = ObjectBankArchive_00358ef8(*(undefined4 *)(param_1 + 0xf54),0);
  FUN_00353e78(*(undefined4 *)(param_1 + 0xf54),param_2,param_1 + 0x1a4,uVar4,
               *(undefined4 *)(param_1 + 0x178),0xffffffff,param_1 + 0x3f4,param_1 + 0x9a4,0x1c);
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,2,1);
  iVar3 = DAT_0018fe08;
  uVar2 = *(ushort *)(param_1 + 0x1c) & 0xf;
  if (uVar2 == 1) {
    *(undefined2 *)(DAT_0018fe08 + 0x62) = 0;
    return;
  }
  if ((((uVar2 == 3) && (iVar5 = FUN_0036e864(param_2,0x37), iVar5 != 0)) &&
      (sVar1 = *(short *)(param_2 + 0x104),
      ((sVar1 == 0x4f || sVar1 == 0x1a) || sVar1 == 0xe) || sVar1 == 0xf)) &&
     ((((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18 == 0x20 &&
       *(char *)(DAT_0018fe0c + param_2) == '\0' && (*(short *)(iVar3 + 100) < 1)))) {
    FUN_0037547c(DAT_0018fe18,0,4,DAT_0018fe14,DAT_0018fe14,DAT_0018fe10);
  }
  return;
}
