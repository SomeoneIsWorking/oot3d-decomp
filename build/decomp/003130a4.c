// OoT3D decomp @ 003130a4  name=FUN_003130a4  size=912

void FUN_003130a4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;

  iVar3 = iRam0031343c;
  fVar2 = fRam00313438;
  iVar1 = iRam00313434;
  if (param_2 != 0) {
    puVar4 = (undefined4 *)func_0x00313644();
    puVar5 = (undefined4 *)func_0x00466f1c();
    uStack_50 = *puVar4;
    uStack_4c = puVar4[1];
    uStack_48 = puVar4[2];
    uStack_44 = puVar4[4];
    uStack_40 = puVar4[5];
    uStack_3c = puVar4[6];
    uStack_38 = puVar4[8];
    uStack_34 = puVar4[9];
    uStack_30 = puVar4[10];
    uStack_74 = *puVar5;
    uStack_70 = puVar5[1];
    uStack_6c = puVar5[2];
    uStack_68 = puVar5[4];
    uStack_64 = puVar5[5];
    uStack_60 = puVar5[6];
    uStack_5c = puVar5[8];
    uStack_58 = puVar5[9];
    uStack_54 = puVar5[10];
    func_0x002dcef4(&uStack_50,&uStack_74,&uStack_50);
    iVar6 = iRam00313440;
    iVar7 = 0;
    do {
      if (param_1[iVar7 * 0x18 + 0x35] == 0x3f800000) {
        func_0x00466e80(param_3,iVar7,param_1 + iVar7 * 0x18 + 0x22,param_1 + iVar7 * 0x18 + 0x26);
        fStack_90 = (float)param_1[iVar7 * 0x18 + 0x32];
        fStack_8c = (float)param_1[iVar7 * 0x18 + 0x33];
        fStack_88 = (float)param_1[iVar7 * 0x18 + 0x34];
        func_0x0034e0f0(&fStack_90,&uStack_50,&fStack_90);
        if (iVar1 < (int)ABS(fStack_90 + fStack_8c + fStack_88)) {
          fVar8 = fVar2 / SQRT(fStack_90 * fStack_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88
                              );
          fStack_90 = fStack_90 * fVar8;
          fStack_8c = fStack_8c * fVar8;
          fStack_88 = fStack_88 * fVar8;
        }
        fStack_84 = fStack_90;
        fStack_80 = fStack_8c;
        fStack_7c = fStack_88;
        iStack_78 = iVar3;
        param_1[iVar7 * 0x18 + 0x36] = (int)fStack_90;
        param_1[iVar7 * 0x18 + 0x37] = (int)fStack_8c;
        param_1[iVar7 * 0x18 + 0x38] = (int)fStack_88;
        param_1[iVar7 * 0x18 + 0x39] = iVar3;
      }
      else {
        param_1[iVar7 * 0x18 + 0x36] = iVar3;
        param_1[iVar7 * 0x18 + 0x37] = iVar3;
        param_1[iVar7 * 0x18 + 0x38] = iVar6;
      }
      param_1[iVar7 * 0x18 + 0x39] = param_1[iVar7 * 0x18 + 0x35];
      func_0x00466ee0(param_3,iVar7,param_1 + iVar7 * 0x18 + 0x36);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    return;
  }
  iVar6 = *param_1;
  uStack_50 = *(undefined4 *)(iVar6 + 0x9c);
  uStack_4c = *(undefined4 *)(iVar6 + 0xa0);
  uStack_48 = *(undefined4 *)(iVar6 + 0xa4);
  uStack_44 = *(undefined4 *)(iVar6 + 0xac);
  uStack_40 = *(undefined4 *)(iVar6 + 0xb0);
  uStack_3c = *(undefined4 *)(iVar6 + 0xb4);
  uStack_38 = *(undefined4 *)(iVar6 + 0xbc);
  uStack_34 = *(undefined4 *)(iVar6 + 0xc0);
  uStack_30 = *(undefined4 *)(iVar6 + 0xc4);
  uStack_74 = *(undefined4 *)(iVar6 + 0xdc);
  uStack_70 = *(undefined4 *)(iVar6 + 0xe0);
  uStack_6c = *(undefined4 *)(iVar6 + 0xe4);
  uStack_68 = *(undefined4 *)(iVar6 + 0xec);
  uStack_64 = *(undefined4 *)(iVar6 + 0xf0);
  uStack_60 = *(undefined4 *)(iVar6 + 0xf4);
  uStack_5c = *(undefined4 *)(iVar6 + 0xfc);
  uStack_58 = *(undefined4 *)(iVar6 + 0x100);
  uStack_54 = *(undefined4 *)(iVar6 + 0x104);
  func_0x002dcef4(&uStack_50,&uStack_74,&uStack_50);
  iVar6 = 0;
  do {
    func_0x002d44c0(*param_1,iVar6,param_1 + iVar6 * 0x18 + 0x22,param_1 + iVar6 * 0x18 + 0x26);
    fStack_90 = (float)param_1[iVar6 * 0x18 + 0x32];
    fStack_8c = (float)param_1[iVar6 * 0x18 + 0x33];
    fStack_88 = (float)param_1[iVar6 * 0x18 + 0x34];
    func_0x0034e0f0(&fStack_90,&uStack_50,&fStack_90);
    if (iVar1 < (int)ABS(fStack_90 + fStack_8c + fStack_88)) {
      fVar8 = fVar2 / SQRT(fStack_90 * fStack_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88);
      fStack_90 = fStack_90 * fVar8;
      fStack_8c = fStack_8c * fVar8;
      fStack_88 = fStack_88 * fVar8;
    }
    fStack_84 = fStack_90;
    fStack_80 = fStack_8c;
    fStack_7c = fStack_88;
    iStack_78 = iVar3;
    param_1[iVar6 * 0x18 + 0x36] = (int)fStack_90;
    param_1[iVar6 * 0x18 + 0x37] = (int)fStack_8c;
    param_1[iVar6 * 0x18 + 0x38] = (int)fStack_88;
    param_1[iVar6 * 0x18 + 0x39] = iVar3;
    param_1[iVar6 * 0x18 + 0x39] = param_1[iVar6 * 0x18 + 0x35];
    func_0x00464dcc(*param_1,iVar6,param_1 + iVar6 * 0x18 + 0x36);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  return;
}
