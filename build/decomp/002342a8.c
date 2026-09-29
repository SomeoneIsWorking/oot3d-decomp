// OoT3D decomp @ 002342a8  name=FUN_002342a8  size=200

void FUN_002342a8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;

  local_24 = DAT_00234370;
  local_20 = DAT_00234374;
  local_1c = DAT_00234378;
  local_30 = DAT_00234374;
  local_2c = DAT_00234374;
  local_28 = DAT_00234374;
  iVar2 = *(int *)(param_4 + 0x128);
  if ((iVar2 != 0) && (param_2 == 10)) {
    FUN_003735ac(&local_30,param_3,&local_24);
    FUN_0036e70c(*(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54));
    fVar3 = (float)FUN_002cfca0();
    fVar1 = DAT_0023437c;
    local_30 = local_30 - fVar3 * DAT_0023437c;
    FUN_0036e70c(*(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54));
    fVar3 = (float)FUN_00338f60();
    *(float *)(iVar2 + 0x28) = local_30;
    *(float *)(iVar2 + 0x2c) = local_2c;
    *(float *)(iVar2 + 0x30) = local_28 - fVar3 * fVar1;
  }
  return;
}
