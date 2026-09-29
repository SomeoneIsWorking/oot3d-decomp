// OoT3D decomp @ 00323fb4  name=FUN_00323fb4  size=312

void FUN_00323fb4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;

  FUN_00372224(&local_44,param_2 + 0x148);
  uVar1 = DAT_003240f0;
  if ((*(int *)(param_2 + 0x230) == DAT_003240ec) && (param_1 = uVar1, *DAT_003240f4 == 0)) {
    *(undefined4 *)(*(int *)(param_4 + 0xc) + 8) = DAT_003240f0;
    FUN_003586ec();
  }
  FUN_003679d0(*(undefined4 *)(param_2 + 0x28),
               *(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0xc4) * *(float *)(param_2 + 0x238)
               ,*(undefined4 *)(param_2 + 0x30),&local_44,param_2 + 0xbc);
  fVar2 = *(float *)(param_2 + 0x23c);
  fVar3 = *(float *)(param_2 + 0x238);
  local_44 = local_44 * fVar2;
  local_34 = local_34 * fVar2;
  local_24 = local_24 * fVar2;
  local_40 = local_40 * fVar3;
  local_30 = local_30 * fVar3;
  local_20 = local_20 * fVar3;
  local_3c = local_3c * fVar2;
  local_2c = local_2c * fVar2;
  local_1c = local_1c * fVar2;
  if (param_4 != 0) {
    *(undefined4 *)(*(int *)(param_4 + 0xc) + 0xc) = param_1;
    *(undefined1 *)(param_4 + 0xac) = 1;
    FUN_003721e0(param_4,&local_44);
    FUN_00372170(param_4,0);
  }
  return;
}
