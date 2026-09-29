// OoT3D decomp @ 004885d0  name=FUN_004885d0  size=232

uint FUN_004885d0(char *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;

  bVar1 = false;
  bVar2 = false;
  pcVar6 = param_1 + 1;
  cVar3 = *param_1;
  if (cVar3 == '0') {
    bVar1 = true;
    pcVar7 = param_1 + 2;
    cVar3 = *pcVar6;
    pcVar6 = pcVar7;
    if (cVar3 == 'x' || cVar3 == 'X') {
      bVar10 = param_3 != 0;
      bVar11 = param_3 != 0x10;
      if (!bVar10 || !bVar11) {
        pcVar6 = param_1 + 3;
        cVar3 = *pcVar7;
      }
      bVar1 = bVar10 && bVar11;
      if (!bVar10 || !bVar11) {
        param_3 = 0x10;
      }
    }
    else if (param_3 == 0) {
      param_3 = 8;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
  }
  uVar8 = 0;
  uVar9 = 0;
  while (iVar4 = FUN_00490ddc(cVar3,param_3), -1 < iVar4) {
    uVar9 = param_3 * uVar9 + iVar4;
    bVar1 = true;
    uVar8 = param_3 * uVar8 + (uVar9 >> 0x10);
    pcVar7 = pcVar6 + 1;
    cVar3 = *pcVar6;
    uVar9 = uVar9 & 0xffff;
    pcVar6 = pcVar7;
    if (0xffff < uVar8) {
      bVar2 = true;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    if (bVar1) {
      param_1 = pcVar6 + -1;
    }
    *param_2 = param_1;
  }
  if (bVar2) {
    puVar5 = (undefined4 *)FUN_002d0508(iVar4);
    *puVar5 = 2;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = uVar9 | uVar8 << 0x10;
  }
  return uVar9;
}
