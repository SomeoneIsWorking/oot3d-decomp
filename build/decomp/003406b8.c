// OoT3D decomp @ 003406b8  name=FUN_003406b8  size=356

void FUN_003406b8(int param_1,undefined4 param_2,int param_3,code *UNRECOVERED_JUMPTABLE,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_5c [2];
  float local_54;
  float local_4c;
  float local_44;
  float local_3c;
  float local_34;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;

  if ((param_8 & 1) == 0) {
    local_2c = *(undefined4 *)(param_1 + 0x28);
    local_28 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58);
    local_24 = *(undefined4 *)(param_1 + 0x30);
    FUN_003a5778(local_5c,param_1 + 0x54,param_1 + 0xbc,&local_2c);
    if (*(float *)(param_3 + 0x94) != DAT_0034081c) {
      fVar3 = *(float *)(param_3 + 0x94) * DAT_00340820;
      if (fVar3 != DAT_0034081c) {
        fVar1 = (float)FUN_003727f0();
        fVar3 = (float)FUN_00372674(fVar3);
        fVar2 = local_5c[0] * fVar1;
        local_5c[0] = local_5c[0] * fVar3 - local_54 * fVar1;
        local_54 = fVar2 + local_54 * fVar3;
        fVar2 = local_4c * fVar1;
        local_4c = local_4c * fVar3 - local_44 * fVar1;
        local_44 = fVar2 + local_44 * fVar3;
        fVar2 = local_3c * fVar1;
        local_3c = local_3c * fVar3 - local_34 * fVar1;
        local_34 = fVar2 + local_34 * fVar3;
      }
    }
    FUN_00372224(param_1 + 0x148,local_5c);
  }
  local_5c[0] = 0.0;
  FUN_0035e240(param_3 + 0x10,param_1 + 0x148,0,param_5,param_1);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0034080c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return;
  }
  return;
}
