// OoT3D decomp @ 00346ab4  name=FUN_00346ab4  size=240

void FUN_00346ab4(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;

  uVar2 = DAT_00346ba8;
  fVar7 = DAT_00346ba4;
  if ((param_2 == 0) ||
     (((int)*(float *)(param_2 + 8) <= DAT_00346bac && (DAT_00346ba4 <= *(float *)(param_2 + 8)))))
  {
    sVar4 = 0;
    while (cVar1 = *(char *)(param_3 + 9),
          ((cVar1 != '\0' && cVar1 != '\x05') && cVar1 != '\a') && cVar1 != '\b') {
      sVar4 = sVar4 + 1;
      param_3 = param_3 + 0x10;
      if (99 < sVar4) {
        return;
      }
    }
    *(undefined1 *)(param_3 + 9) = 2;
    uVar3 = DAT_00346bb0;
    uVar5 = param_4[1];
    uVar6 = param_4[2];
    *param_3 = *param_4;
    param_3[1] = uVar5;
    param_3[2] = uVar6;
    uVar5 = param_5[1];
    uVar6 = param_5[2];
    param_3[3] = *param_5;
    param_3[4] = uVar5;
    param_3[5] = uVar6;
    param_3[6] = fVar7;
    param_3[7] = uVar2;
    param_3[8] = fVar7;
    fVar7 = (float)FUN_00371e50(uVar3);
    *(short *)((int)param_3 + 0x2a) = (short)(int)fVar7 + 100;
    param_3[0xc] = param_1;
  }
  return;
}
