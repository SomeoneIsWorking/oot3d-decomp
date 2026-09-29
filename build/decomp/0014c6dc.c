// OoT3D decomp @ 0014c6dc  name=FUN_0014c6dc  size=380

void FUN_0014c6dc(int param_1,int param_2)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;

  FUN_00372224(&local_40,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1a8) != 2) {
    if ((*(short *)(param_1 + 0x1c) < 0) || (*(short *)(param_1 + 0x1c) == 0xc)) {
      if (*(char *)(DAT_0014c858 + param_1) != '\0') {
        cVar1 = *(char *)(DAT_0014c858 + param_1) + -1;
        *(char *)(param_1 + 0x538) = cVar1;
        pfVar2 = (float *)(DAT_0014c85c + (0x25 - cVar1) * 0xc);
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[2];
        local_40 = local_40 * fVar3;
        local_30 = local_30 * fVar3;
        local_20 = local_20 * fVar3;
        local_3c = local_3c * fVar4;
        local_2c = local_2c * fVar4;
        local_1c = local_1c * fVar4;
        local_38 = local_38 * fVar5;
        local_28 = local_28 * fVar5;
        local_18 = local_18 * fVar5;
      }
    }
    else {
      *(float *)(param_1 + 0x548) = *(float *)(param_2 + 0x7f44) * DAT_0014c860;
      FUN_00373bec();
      FUN_00371fac(&local_40,param_2 + 0x2fc);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x534) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x534),&local_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x534),0);
  }
  if ((*(short *)(param_1 + 0x1c) < 1) || (*(short *)(param_1 + 0x1c) == 0xb)) {
    FUN_00357750(0,param_1 + 0x4c0,&local_40);
  }
  return;
}
