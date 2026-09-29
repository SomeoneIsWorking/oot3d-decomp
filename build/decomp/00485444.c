// OoT3D decomp @ 00485444  name=FUN_00485444  size=280

undefined4 FUN_00485444(int *param_1,int *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;

  puVar6 = (undefined2 *)*param_2;
  puVar7 = (undefined2 *)param_2[1];
  puVar4 = (undefined2 *)0x0;
  puVar1 = (undefined2 *)*param_1;
  if ((undefined2 *)*param_1 != (undefined2 *)0x0) {
    do {
      puVar3 = puVar1;
      if (puVar6 <= puVar3) {
        puVar5 = puVar4;
        if (puVar7 == puVar3) {
          puVar7 = (undefined2 *)((int)puVar3 + *(int *)(puVar3 + 2) + 0x10);
          iVar8 = *(int *)(puVar3 + 4);
          iVar2 = *(int *)(puVar3 + 6);
          if (iVar8 == 0) {
            *param_1 = iVar2;
          }
          else {
            *(int *)(iVar8 + 0xc) = iVar2;
          }
          if (iVar2 == 0) {
            param_1[1] = iVar8;
          }
          else {
            *(int *)(iVar2 + 8) = iVar8;
          }
        }
        break;
      }
      puVar1 = *(undefined2 **)(puVar3 + 6);
      puVar4 = puVar3;
      puVar5 = puVar3;
    } while (*(undefined2 **)(puVar3 + 6) != (undefined2 *)0x0);
    puVar4 = puVar5;
    if ((puVar5 != (undefined2 *)0x0) && ((int)puVar5 + *(int *)(puVar5 + 2) + 0x10 == *param_2)) {
      puVar4 = *(undefined2 **)(puVar5 + 4);
      iVar2 = *(int *)(puVar5 + 6);
      if (puVar4 == (undefined2 *)0x0) {
        *param_1 = iVar2;
      }
      else {
        *(int *)(puVar4 + 6) = iVar2;
      }
      puVar6 = puVar5;
      if (iVar2 == 0) {
        param_1[1] = (int)puVar4;
      }
      else {
        *(undefined2 **)(iVar2 + 8) = puVar4;
      }
    }
  }
  if ((uint)((int)puVar7 - (int)puVar6) < 0x10) {
    return 0;
  }
  *puVar6 = (short)DAT_0048555c;
  puVar6[1] = 0;
  *(int *)(puVar6 + 2) = (int)puVar7 - (int)(puVar6 + 8);
  *(undefined2 **)(puVar6 + 4) = puVar4;
  *(undefined4 *)(puVar6 + 6) = 0;
  if (puVar4 == (undefined2 *)0x0) {
    iVar2 = *param_1;
    *param_1 = (int)puVar6;
  }
  else {
    iVar2 = *(int *)(puVar4 + 6);
    *(undefined2 **)(puVar4 + 6) = puVar6;
  }
  *(int *)(puVar6 + 6) = iVar2;
  if (iVar2 == 0) {
    param_1[1] = (int)puVar6;
  }
  else {
    *(undefined2 **)(iVar2 + 8) = puVar6;
  }
  return 1;
}
