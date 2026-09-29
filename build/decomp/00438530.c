// OoT3D decomp @ 00438530  name=FUN_00438530  size=172

void FUN_00438530(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;

  puVar1 = *(undefined4 **)(param_1 + 8);
  if (((int)puVar1 - *(int *)(param_1 + 4) & 0xfU) == 0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 **)(param_1 + 8) = puVar1 + 2;
  }
  local_18 = *DAT_004385dc;
  uStack_14 = DAT_004385dc[1];
  uStack_10 = DAT_004385dc[2];
  FUN_00307bd8(param_1,0x111,1,0,0xf,&local_18);
  FUN_00307bd8(param_1,0x110,1,0,0xf,&uStack_14);
  FUN_00307bd8(param_1,0x10,1,0,0xf,&uStack_10);
  return;
}
