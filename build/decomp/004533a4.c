// OoT3D decomp @ 004533a4  name=QueenLuminary_004533a4  size=140

undefined4 * QueenLuminary_004533a4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;

  param_1[1] = 0;
  uVar2 = DAT_00453430;
  param_1[2] = 0;
  param_1[3] = uVar2;
  param_1[0x3c] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_00343280(param_1 + 0xc,0x60);
  FUN_00343280(param_1 + 0x24,0x60);
  iVar1 = (**(code **)(*(int *)*DAT_00453438 + 0xc))
                    ((int *)*DAT_00453438,0x234,DAT_00453434,DAT_0045343c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00347258();
  }
  *param_1 = uVar2;
  return param_1;
}
