// OoT3D decomp @ 004228ec  name=FUN_004228ec  size=332

void FUN_004228ec(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_54 [44];
  undefined4 local_28;

  uVar12 = DAT_00422a38;
  iVar11 = 0;
  if (0 < param_3) {
    do {
      piVar5 = (int *)(param_2 + iVar11 * 8);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        *(undefined4 *)(param_4 + iVar11 * 4) = uVar12;
      }
      else {
        cVar1 = (char)piVar5[1];
        if (cVar1 == '\0') {
          uVar13 = FUN_003478bc(iVar2,0);
          FUN_0036c174(auStack_54,param_5,uVar13);
        }
        else if (cVar1 == '\x01') {
          FUN_0036c174(auStack_54,param_5,iVar2 + 0xc);
        }
        *(undefined4 *)(param_4 + iVar11 * 4) = local_28;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_3);
  }
  iVar11 = 0;
  if (0 < param_3) {
    do {
      iVar2 = iVar11;
      if (0 < (param_3 - iVar11) + -1) {
        pfVar3 = (float *)(param_4 + iVar11 * 4);
        iVar6 = 0;
        iVar8 = (param_3 - iVar11) + -1;
        do {
          pfVar3 = pfVar3 + 1;
          if (*pfVar3 < *(float *)(param_4 + iVar2 * 4)) {
            iVar2 = iVar11 + iVar6 + 1;
          }
          iVar8 = iVar8 + -1;
          iVar6 = iVar6 + 1;
        } while (iVar8 != 0);
      }
      puVar9 = (undefined4 *)(param_4 + iVar2 * 4);
      puVar7 = (undefined4 *)(param_2 + iVar2 * 8);
      puVar10 = (undefined4 *)(param_4 + iVar11 * 4);
      puVar4 = (undefined4 *)(param_2 + iVar11 * 8);
      uVar12 = puVar7[1];
      uVar13 = *puVar7;
      uVar15 = *puVar9;
      *puVar9 = *puVar10;
      uVar14 = puVar4[1];
      iVar11 = iVar11 + 1;
      *puVar7 = *puVar4;
      puVar7[1] = uVar14;
      *puVar10 = uVar15;
      puVar4[1] = uVar12;
      *puVar4 = uVar13;
    } while (iVar11 < param_3);
  }
  return;
}
