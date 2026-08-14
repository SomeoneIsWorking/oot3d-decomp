// OoT3D decomp @ 002095b4  name=FUN_002095b4  size=268

/* WARNING: Possible PIC construction at 0x00209664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00209668) */

void FUN_002095b4(undefined4 param_1,int param_2,float *param_3,int param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar5 = fRam00209688;
  iVar4 = iRam00209684;
  if (param_2 != 2) {
    return;
  }
  if (((*(uint *)(iRam00209684 + 0x18) & 1) == 0) &&
     (iVar3 = func_0x003679b4(iRam00209684 + 0x18), pfVar1 = pfRam00209690, iVar3 != 0)) {
    *pfRam00209690 = fRam0020968c;
    pfVar1[1] = fVar5;
    pfVar1[2] = fVar5;
  }
  if (((*(uint *)(iVar4 + 0x14) & 1) == 0) &&
     (iVar4 = func_0x003679b4(uRam00209694), puVar2 = puRam0020969c, iVar4 != 0)) {
    *puRam0020969c = uRam00209698;
    puVar2[1] = fVar5;
    puVar2[2] = fVar5;
  }
  fVar5 = param_3[4];
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  fVar8 = param_3[7];
  fVar9 = param_3[8];
  fVar10 = param_3[9];
  fVar11 = param_3[10];
  fVar12 = param_3[0xb];
  fVar13 = *pfRam00209690;
  fVar14 = pfRam00209690[1];
  fVar15 = pfRam00209690[2];
  *(float *)(param_4 + 0x3c) =
       param_3[3] + *param_3 * fVar13 + param_3[1] * fVar14 + param_3[2] * fVar15;
  *(float *)(param_4 + 0x40) = fVar8 + fVar5 * fVar13 + fVar6 * fVar14 + fVar7 * fVar15;
  *(float *)(param_4 + 0x44) = fVar12 + fVar9 * fVar13 + fVar10 * fVar14 + fVar11 * fVar15;
  return;
}

