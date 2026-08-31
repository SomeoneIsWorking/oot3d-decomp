// OoT3D decomp @ 004c34ac  name=FUN_004c34ac  size=408

void FUN_004c34ac(int *param_1,int param_2,int param_3)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;

  iVar9 = 0;
  *param_1 = param_2;
  param_1[1] = param_2 + 0xc;
  iVar5 = *(int *)(param_2 + 8);
  param_1[4] = param_3;
  puVar6 = *(undefined4 **)(param_3 + 8);
  *(undefined4 **)(param_3 + 8) = puVar6 + *(int *)(param_2 + 8) * 0x73;
  puVar7 = puVar6;
  if (0 < *(int *)(*param_1 + 8)) {
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        FUN_004c6264(puVar7 + 4);
      }
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 0x73;
    } while (iVar9 < *(int *)(*param_1 + 8));
  }
  param_1[3] = (int)puVar6;
  fVar1 = fRam004c3664;
  iVar9 = 0;
  if (0 < *(int *)(*param_1 + 8)) {
    do {
      piVar8 = (int *)(param_1[3] + iVar9 * 0x1cc);
      iVar4 = param_1[2];
      iVar3 = param_1[1] + iVar9 * 0x15c;
      *piVar8 = iVar3;
      piVar8[1] = iVar4;
      piVar8[2] = param_2 + 0xc + iVar5 * 0x15c;
      if (*(char *)(iVar3 + 0x138) == '\x01') {
        *(undefined1 *)(piVar8 + 0x70) = 1;
        uVar2 = func_0x00307a48(*(undefined2 *)(iVar3 + 0x13c));
        *(undefined1 *)((int)piVar8 + 0x1c2) = uVar2;
        uVar2 = func_0x003079d0(*(undefined2 *)(iVar3 + 0x13e));
        *(undefined1 *)((int)piVar8 + 0x1c3) = uVar2;
        uVar2 = func_0x00307a48(*(undefined2 *)(iVar3 + 0x144));
        *(undefined1 *)(piVar8 + 0x71) = uVar2;
        uVar2 = func_0x003079d0(*(undefined2 *)(iVar3 + 0x146));
        *(undefined1 *)((int)piVar8 + 0x1c5) = uVar2;
        uVar2 = func_0x00307964(*(undefined2 *)(iVar3 + 0x140));
        *(undefined1 *)((int)piVar8 + 0x1c6) = uVar2;
        uVar2 = func_0x00307964(*(undefined2 *)(iVar3 + 0x148));
        *(undefined1 *)((int)piVar8 + 0x1c7) = uVar2;
        uVar10 = VectorFloatToUnsigned(*(float *)(iVar3 + 0x14c) * fVar1,3);
        *(char *)(piVar8 + 0x72) = (char)uVar10;
        uVar10 = VectorFloatToUnsigned(*(float *)(iVar3 + 0x150) * fVar1,3);
        *(char *)((int)piVar8 + 0x1c9) = (char)uVar10;
        uVar10 = VectorFloatToUnsigned(*(float *)(iVar3 + 0x154) * fVar1,3);
        *(char *)((int)piVar8 + 0x1ca) = (char)uVar10;
        uVar10 = VectorFloatToUnsigned(*(float *)(iVar3 + 0x158) * fVar1,3);
        *(char *)((int)piVar8 + 0x1cb) = (char)uVar10;
      }
      else {
        *(undefined1 *)(piVar8 + 0x70) = 0;
      }
      FUN_004c6364(piVar8 + 3,*piVar8 + 0xcc);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(*param_1 + 8));
  }
  return;
}
