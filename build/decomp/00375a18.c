// OoT3D decomp @ 00375a18  name=FUN_00375a18  size=332

int FUN_00375a18(short *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  sVar1 = *param_1;
  sVar2 = (short)param_2;
  iVar6 = (int)(short)(sVar2 - sVar1);
  if (sVar1 != param_2) {
    sVar3 = FUN_00368d94(iVar6,param_3);
    iVar5 = (int)sVar3;
    iVar4 = *DAT_00375b64;
    if ((param_5 < iVar5) || (iVar5 + param_5 < 0 != SBORROW4(iVar5,-param_5))) {
      if (param_4 < iVar5) {
        iVar5 = param_4;
      }
      if (iVar5 + param_4 < 0 != SBORROW4(iVar5,-param_4)) {
        iVar5 = (int)(short)-param_4;
      }
      fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                        );
      if (iVar5 < 1) {
        fVar7 = fVar8 * fVar7 * DAT_00375b68 - DAT_00375b6c;
      }
      else {
        fVar7 = DAT_00375b6c + fVar8 * fVar7 * DAT_00375b68;
      }
      *param_1 = (short)(int)fVar7 + sVar1;
    }
    else {
      if (iVar6 < 0) {
        fVar7 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if (param_5 < 1) {
          fVar7 = fVar8 * fVar7 * DAT_00375b68 - DAT_00375b6c;
        }
        else {
          fVar7 = DAT_00375b6c + fVar8 * fVar7 * DAT_00375b68;
        }
        sVar1 = sVar1 - (short)(int)fVar7;
        *param_1 = sVar1;
        if ((short)(sVar2 - sVar1) < 0) {
          return iVar6;
        }
      }
      else {
        fVar7 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if (param_5 < 1) {
          fVar7 = fVar8 * fVar7 * DAT_00375b68 - DAT_00375b6c;
        }
        else {
          fVar7 = DAT_00375b6c + fVar8 * fVar7 * DAT_00375b68;
        }
        sVar1 = (short)(int)fVar7 + sVar1;
        *param_1 = sVar1;
        if (0 < (short)(sVar2 - sVar1)) {
          return iVar6;
        }
      }
      *param_1 = sVar2;
    }
  }
  return iVar6;
}

