// OoT3D decomp @ 00444e20  name=FUN_00444e20  size=552

void FUN_00444e20(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_24;
  float local_20;
  undefined4 local_1c;

  fVar2 = DAT_00445070;
  iVar1 = DAT_0044506c;
  fVar5 = *(float *)(DAT_0044506c + 0x48);
  if ((DAT_00445070 < *(float *)(DAT_0044506c + 0x50)) && (*(float *)(DAT_0044506c + 0x4c) <= fVar5)
     ) {
    fVar6 = *(float *)(DAT_0044506c + 0x4c) + *(float *)(DAT_0044506c + 0x50);
    *(float *)(DAT_0044506c + 0x4c) = fVar6;
    if (fVar5 <= fVar6) {
      *(float *)(iVar1 + 0x4c) = fVar5;
      *(float *)(iVar1 + 0x50) = fVar2;
    }
  }
  if ((*(float *)(iVar1 + 0x50) < fVar2) && (fVar5 <= *(float *)(iVar1 + 0x4c))) {
    fVar6 = *(float *)(iVar1 + 0x4c) + *(float *)(iVar1 + 0x50);
    *(float *)(iVar1 + 0x4c) = fVar6;
    if (fVar6 <= fVar5) {
      *(float *)(iVar1 + 0x4c) = fVar5;
      *(float *)(iVar1 + 0x50) = fVar2;
    }
  }
  iVar4 = DAT_00445074;
  local_24 = fVar2;
  local_20 = *(float *)(iVar1 + 0x4c);
  if (*(float *)(iVar1 + 0x50) == fVar2) {
    if (*(int *)(DAT_00445074 + 0xc) == 0) {
      iVar3 = 0x75;
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_24,1,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x7a);
    }
    else {
      iVar3 = 0xac;
      local_20 = local_20 + DAT_00445078;
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_24,1,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xaf);
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_24,1,0x78);
      local_1c = DAT_0044507c;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_1c,1,0x78);
    }
  }
  else {
    iVar3 = 0x75;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_24,1,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x7a);
  }
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar3 != 0xb) {
    if (iVar3 < 0xc) {
      switch(iVar3) {
      case 2:
      case 3:
      case 8:
      case 9:
      case 10:
        goto switchD_00444fac_caseD_2;
      default:
        return;
      }
    }
    if (((iVar3 != 0xe && iVar3 != 0xf) && iVar3 != 0x20) && iVar3 != 0x2f) {
      return;
    }
  }
switchD_00444fac_caseD_2:
  if (*(int *)(iVar4 + 0xc) == 0) {
    local_24 = fVar2;
    local_20 = fVar2;
    FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_24,1,0x78);
    iVar4 = 0xac;
    local_24 = DAT_00445080;
    local_20 = fVar2;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_24,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xaf);
    local_1c = DAT_00445084;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_1c,1,0x78);
  }
  return;
}
