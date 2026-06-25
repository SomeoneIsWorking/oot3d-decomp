// OoT3D decomp @ 002fcb04  name=FUN_002fcb04  size=364

void FUN_002fcb04(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float local_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  fVar4 = DAT_002fcc84;
  fVar3 = DAT_002fcc80;
  fVar2 = DAT_002fcc7c;
  iVar1 = DAT_002fcc78;
  if (*param_1 != 8) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    local_5c[0] = *DAT_002fcc70;
    local_5c[1] = DAT_002fcc70[1];
    local_5c[2] = DAT_002fcc70[2];
    local_5c[3] = DAT_002fcc70[3];
    fStack_4c = DAT_002fcc70[4];
    fStack_48 = DAT_002fcc70[5];
    fStack_44 = DAT_002fcc70[6];
    fStack_40 = DAT_002fcc70[7];
    fStack_3c = DAT_002fcc70[8];
    fStack_38 = DAT_002fcc70[9];
    local_84[0] = *DAT_002fcc74;
    local_84[1] = DAT_002fcc74[1];
    local_84[2] = DAT_002fcc74[2];
    local_84[3] = DAT_002fcc74[3];
    fStack_74 = DAT_002fcc74[4];
    fStack_70 = DAT_002fcc74[5];
    fStack_6c = DAT_002fcc74[6];
    fStack_68 = DAT_002fcc74[7];
    iVar9 = 1;
    iVar7 = 0;
    local_64 = DAT_002fcc74[8];
    fStack_60 = DAT_002fcc74[9];
    iVar8 = param_2;
    if (0 < param_1[1]) {
      do {
        iVar5 = (int)((ulonglong)((longlong)iVar1 * (longlong)iVar8) >> 0x20);
        iVar6 = (int)((ulonglong)((longlong)iVar1 * (longlong)iVar8) >> 0x20);
        local_8c = (float)VectorSignedToFloat(iVar8 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -10,
                                              (byte)(in_fpscr >> 0x15) & 3);
        if ((param_2 < iVar9) && (iVar7 != 0)) {
          local_90 = fVar3;
          local_94 = fVar3;
          local_88 = fVar3;
          local_8c = fVar3;
          local_9c = fVar4;
        }
        else {
          local_8c = local_8c * fVar2;
          local_88 = local_5c[*param_1 + param_3];
          local_94 = fVar2;
          local_90 = local_84[*param_1];
          local_9c = fVar3;
        }
        local_98 = fVar3;
        FUN_002f9430(param_1[2],&local_9c,1,iVar7);
        FUN_002fc40c(param_1[2],&local_8c,&local_94,1,iVar7);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 * 10;
        iVar8 = (iVar6 >> 2) - (iVar6 >> 0x1f);
      } while (iVar7 < param_1[1]);
    }
  }
  return;
}

