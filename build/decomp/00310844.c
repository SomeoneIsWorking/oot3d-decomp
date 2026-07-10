// OoT3D decomp @ 00310844  name=FUN_00310844  size=312

undefined4 FUN_00310844(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  
  iVar2 = iRam00310980;
  piVar6 = *(int **)(*(int *)(iRam0031097c + 8) + (param_1 & 0x1ff) * 4 + 8);
  if (piVar6 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar6 + 1);
      if (*puVar1 != param_1) {
        piVar6 = (int *)*piVar6;
      }
    } while (*puVar1 != param_1 && piVar6 != (int *)0x0);
  }
  uVar7 = 0;
  if (piVar6[8] != 0) {
    do {
      if ((char)piVar6[0xfd] == '\0') {
        uVar3 = piVar6[10];
        if (uVar7 < uVar3) goto code_r0x00310900;
code_r0x00310934:
        iVar5 = *(int *)(iVar2 + (uVar7 - uVar3) * 0xc + 8);
      }
      else if (uVar7 < (uint)piVar6[9]) {
code_r0x00310900:
        iVar5 = *(int *)(piVar6[7] + uVar7 * 0xc + 4) +
                *(int *)(*(int *)(piVar6[0xf9] + 0x10) + piVar6[0xfa] * 0xe8 + 0xe0);
      }
      else {
        uVar3 = piVar6[10];
        if (uVar3 <= uVar7) goto code_r0x00310934;
        iVar5 = *(int *)(piVar6[7] + uVar7 * 0xc + 4) +
                *(int *)(*(int *)(piVar6[0xf9] + 0x10) + piVar6[0xfb] * 0xe8 + 0xe0);
      }
      iVar5 = FUN_00303414(param_2,iVar5);
      bVar8 = iVar5 == 0;
      uVar3 = 0;
      if (!bVar8) {
        uVar3 = piVar6[8];
        uVar7 = uVar7 + 1;
      }
    } while ((bVar8 || uVar7 <= uVar3) && (!bVar8 && uVar3 != uVar7));
  }
  if (piVar6[8] == uVar7) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(piVar6[7] + uVar7 * 0xc);
  }
  return uVar4;
}

