// OoT3D decomp @ 002d4094  name=FUN_002d4094  size=448

void FUN_002d4094(float param_1,int param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = DAT_002d4254;
  bVar4 = (*(byte *)(param_2 + 0x52) & 0x10) != 0;
  if (bVar4) {
    param_1 = DAT_002d4254;
  }
  if (bVar4) {
    param_3[2] = DAT_002d4254;
    *param_3 = param_1;
  }
  else {
    fVar7 = *(float *)((uint)*(byte *)(param_2 + 0x75) * 0x34 + 0xc + *(int *)(param_2 + 0x78));
    fVar8 = *(float *)((uint)*(byte *)(param_2 + 0x75) * 0x34 + 0x2c + *(int *)(param_2 + 0x78));
    fVar5 = (float)FUN_002cfca0(param_4);
    fVar6 = (float)FUN_00338f60(param_4);
    *param_3 = fVar7 * fVar6 + fVar8 * fVar5;
    param_3[2] = fVar8 * fVar6 - fVar7 * fVar5;
    fVar7 = *(float *)(param_2 + 0x58);
    fVar8 = *(float *)(param_2 + 0x60);
    fVar5 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0x54));
    fVar6 = (float)FUN_00338f60((int)*(short *)(param_2 + 0x54));
    *param_3 = *param_3 - (fVar7 * fVar6 + fVar8 * fVar5);
    param_3[2] = param_3[2] - (fVar8 * fVar6 - fVar7 * fVar5);
  }
  *(short *)(param_2 + 0x54) = (short)param_4;
  iVar2 = *(int *)(param_2 + 0x78) + (uint)*(byte *)(param_2 + 0x75) * 0x34;
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(*(int *)(param_2 + 0x78) + (uint)*(byte *)(param_2 + 0x75) * 0x34 + 0x2c) =
       *(undefined4 *)(param_2 + 0x6c);
  if ((*(byte *)(param_2 + 0x52) & 2) == 0) {
    param_3[1] = fVar1;
    *(undefined4 *)(param_2 + 0x5c) =
         *(undefined4 *)(*(int *)(param_2 + 0x78) + (uint)*(byte *)(param_2 + 0x75) * 0x34 + 0x1c);
  }
  else {
    if ((*(byte *)(param_2 + 0x52) & 0x10) == 0) {
      param_3[1] = *(float *)((uint)*(byte *)(param_2 + 0x75) * 0x34 + 0x1c +
                             *(int *)(param_2 + 0x78)) - *(float *)(param_2 + 0x5c);
    }
    else {
      param_3[1] = fVar1;
    }
    puVar3 = (undefined4 *)
             ((uint)*(byte *)(param_2 + 0x75) * 0x34 + 0x1c + *(int *)(param_2 + 0x78));
    *(undefined4 *)(param_2 + 0x5c) = *puVar3;
    *puVar3 = *(undefined4 *)(param_2 + 0x68);
  }
  *(byte *)(param_2 + 0x52) = *(byte *)(param_2 + 0x52) & 0xef;
  return;
}

