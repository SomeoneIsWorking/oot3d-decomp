// OoT3D decomp @ 004090cc  name=FUN_004090cc  size=176

void FUN_004090cc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_00307bd8(*param_1,0x200,0x27,1,0xf,param_2 + 0x194);
  FUN_00307bd8(*param_1,DAT_0040917c,2,1,0xf,param_2 + 0x230);
  uVar1 = DAT_00409180;
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    do {
      FUN_00307bd8(*param_1,uVar1,4,1,0xf,param_2 + iVar2 * 0x10 + 0x238);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x10));
  }
  param_1[8] = *(undefined4 *)(param_2 + 0x2f8);
  param_1[9] = *(undefined4 *)(param_2 + 0x2fc);
  return;
}
