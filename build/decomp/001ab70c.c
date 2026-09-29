// OoT3D decomp @ 001ab70c  name=FUN_001ab70c  size=608

void FUN_001ab70c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = DAT_001ab988;
  FUN_00372d4c(DAT_001ab988,DAT_001ab980,param_1 + 0xbc,DAT_001ab984);
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0xbd8,param_1,DAT_001ab98c);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001ab990 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
  FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,param_1 + 0x228,param_1 + 0x604,0x13);
  FUN_0035c358(param_1 + 0x9e0,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),8);
  FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),7);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
  *(undefined1 *)(param_1 + 0xc32) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 2:
    FUN_00343088(uVar1,param_1,DAT_001ab994,0);
    *(undefined4 *)(param_1 + 0xbb4) = 7;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    return;
  case 3:
    FUN_00343088(uVar1,param_1,DAT_001ab994,0);
    *(undefined4 *)(param_1 + 0xbb4) = 10;
    *(undefined4 *)(param_1 + 0xbd4) = 1;
    return;
  case 4:
    FUN_00343088(uVar1,param_1,DAT_001ab994,0);
    *(undefined4 *)(param_1 + 0xbb4) = 0xf;
    return;
  case 5:
    FUN_00343088(uVar1,param_1,DAT_001ab994,0);
    *(undefined4 *)(param_1 + 0xbb4) = 0x12;
    break;
  case 6:
    FUN_00343088(uVar1,param_1,DAT_001ab994,0);
    *(undefined4 *)(param_1 + 0xbb4) = 0x1b;
    *(undefined4 *)(param_1 + 3000) = 0;
    break;
  default:
    FUN_00343088(uVar1,param_1,DAT_001ab994,0);
    *(undefined4 *)(param_1 + 0xc4) = DAT_001ab998;
    return;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}
