// OoT3D decomp @ 00368b98  name=FUN_00368b98  size=268

void FUN_00368b98(float param_1,float param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined2 param_6,int param_7)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;

  if (((param_3 == 0) ||
      (((int)*(float *)(param_3 + 8) <= DAT_00368ca4 && (DAT_00368ca8 <= *(float *)(param_3 + 8)))))
     && (iVar4 = 0, 0 < param_7)) {
    while (*(char *)(param_4 + 9) != '\0') {
      param_4 = param_4 + 0x10;
      iVar4 = (int)(short)((short)iVar4 + 1);
      if (param_7 <= iVar4) {
        return;
      }
    }
    *(undefined1 *)(param_4 + 9) = 1;
    fVar2 = DAT_00368cb0;
    uVar5 = param_5[1];
    uVar6 = param_5[2];
    *param_4 = *param_5;
    param_4[1] = uVar5;
    param_4[2] = uVar6;
    puVar1 = DAT_00368cac;
    uVar5 = DAT_00368cac[1];
    uVar6 = DAT_00368cac[2];
    param_4[3] = *DAT_00368cac;
    param_4[4] = uVar5;
    param_4[5] = uVar6;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    param_4[6] = *puVar1;
    param_4[7] = uVar5;
    param_4[8] = uVar6;
    param_4[0xc] = param_1 * fVar2;
    param_4[0xd] = param_2 * fVar2;
    fVar3 = DAT_00368cbc;
    fVar2 = DAT_00368cb8;
    fVar7 = param_2 * DAT_00368cb0 - param_1 * DAT_00368cb0;
    if ((int)param_1 <= DAT_00368cb4) {
      *(undefined2 *)((int)param_4 + 0x2a) = param_6;
      *(undefined2 *)(param_4 + 0xb) = 1;
      param_4[0xe] = fVar7 * fVar3;
      return;
    }
    *(undefined2 *)((int)param_4 + 0x2a) = 0;
    *(undefined2 *)((int)param_4 + 0x2e) = param_6;
    *(undefined2 *)(param_4 + 0xb) = 0;
    param_4[0xe] = fVar7 * fVar2;
  }
  return;
}
