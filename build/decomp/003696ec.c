// OoT3D decomp @ 003696ec  name=FUN_003696ec  size=532

float FUN_003696ec(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = 0xe8000000;
  bVar5 = (int)param_1 * 2 + 0xe8000000U < 0xe5000000;
  if (bVar5) {
    uVar3 = (int)param_2 * 2 + 0xe8000000;
  }
  fVar2 = param_1;
  fVar7 = param_2;
  if (!bVar5 || 0xe4ffffff < uVar3) {
    bVar5 = (uint)((int)param_1 << 1) < 0xff000001;
    if (bVar5) {
      bVar5 = (uint)((int)param_2 << 1) < 0xff000001;
    }
    if (!bVar5) {
      return param_1 + param_2;
    }
    if ((((uint)param_1 | (uint)param_2) & 0x7fffffff) == 0) {
      param_2 = (float)((uint)param_2 | 0x7f800000);
      fVar7 = param_2;
    }
    else {
      bVar5 = ((uint)param_1 & 0x7fffffff) == 0x7f800000;
      if (bVar5) {
        bVar5 = ((uint)param_2 & 0x7fffffff) == 0x7f800000;
      }
      if (bVar5) {
        fVar2 = (float)((uint)param_1 & 0xbfffffff);
        param_2 = (float)((uint)param_2 & 0xbfffffff);
        param_1 = fVar2;
        fVar7 = param_2;
      }
      else {
        bVar5 = ((uint)param_1 & 0x7fffffff) == 0x7f800000;
        if (!bVar5) {
          bVar5 = ((uint)param_2 & 0x7fffffff) == 0;
        }
        if (bVar5) {
          param_2 = (float)((uint)param_2 & 0x80000000);
          fVar2 = (float)((uint)param_1 | 0x7f800000);
        }
        else if (-1 < (int)(((uint)param_2 ^ (uint)param_1) << 1)) {
          fVar7 = DAT_00369900;
          if (-1 < (int)param_2 * 2) {
            fVar7 = DAT_00369904;
          }
          param_2 = param_2 * fVar7;
          fVar2 = param_1 * fVar7;
          param_1 = param_1 * fVar7;
          fVar7 = param_2;
        }
      }
    }
  }
  iVar4 = ((uint)((int)fVar2 * 2) >> 0x18) - ((uint)((int)param_2 << 1) >> 0x18);
  if (0x1b < iVar4) {
    fVar2 = DAT_00369908;
    if (((uint)fVar2 & 0x80000000) != 0) {
      fVar2 = DAT_0036990c;
    }
    return fVar2;
  }
  if (iVar4 + 0x1a < 0 != SCARRY4(iVar4,0x1a)) {
    if (((uint)param_2 & 0x80000000) != 0) {
      fVar2 = DAT_00369910;
      if (((uint)fVar2 & 0x80000000) != 0) {
        fVar2 = DAT_00369914;
      }
      return fVar2;
    }
    iVar4 = FUN_002c0b34(param_1 / fVar7);
    if (iVar4 == 4) {
      FUN_002c0b24();
    }
    return param_1 / fVar7;
  }
  if ((uint)((int)param_2 * 2) < (uint)((int)fVar2 * 2)) {
    fVar6 = -param_1;
    fVar1 = (float)((uint)fVar2 ^ 0x80000000);
    fVar2 = param_2;
    param_1 = fVar7;
    fVar7 = DAT_0036991c;
    fVar8 = DAT_00369918;
    if (((uint)fVar2 & 0x80000000) != 0) {
      fVar7 = DAT_00369924;
      fVar8 = DAT_00369920;
    }
  }
  else {
    fVar1 = param_2;
    fVar6 = fVar7;
    fVar7 = DAT_00369928;
    fVar8 = DAT_00369928;
    if ((((uint)param_2 & 0x80000000) != 0) &&
       (fVar7 = DAT_00369930, fVar8 = DAT_0036992c, ((uint)fVar2 & 0x80000000) != 0)) {
      fVar7 = DAT_00369938;
      fVar8 = DAT_00369934;
    }
  }
  if ((uint)(((int)fVar1 - (int)fVar2) * 2) < 0x1000000) {
    if ((((uint)fVar1 ^ (uint)fVar2) & 0x80000000) == 0) {
      fVar8 = fVar8 + DAT_0036993c;
      fVar7 = fVar7 + DAT_00369940;
      fVar2 = DAT_00369948;
    }
    else {
      fVar8 = fVar8 - DAT_0036993c;
      fVar7 = fVar7 - DAT_00369940;
      fVar2 = DAT_00369944;
    }
    param_1 = (param_1 - fVar2 * fVar6) / (fVar6 + param_1 * fVar2);
  }
  else {
    param_1 = param_1 / fVar6;
  }
  fVar2 = param_1 * param_1;
  return fVar7 + param_1 * fVar2 *
                 (DAT_0036995c +
                 fVar2 * (DAT_00369958 +
                         fVar2 * (DAT_00369954 + fVar2 * (DAT_00369950 + fVar2 * DAT_0036994c)))) +
         param_1 + fVar8;
}

