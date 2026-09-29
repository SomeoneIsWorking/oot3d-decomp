// OoT3D decomp @ 002bd8c4  name=FUN_002bd8c4  size=296

void FUN_002bd8c4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  undefined4 *puVar5;

  if (param_1[0x1a] == 0) {
    puVar5 = param_1 + 0x19;
    if (param_1[10] != 0) {
      puVar1 = (undefined4 *)param_1[2];
      if (puVar1 != puVar5) {
        FUN_002bea70(puVar5);
        param_1[0x1a] = puVar1[1];
        piVar2 = (int *)puVar1[2];
        param_1[0x1b] = piVar2;
        *piVar2 = *piVar2 + 1;
      }
      param_1[2] = param_1[2] + 0xc;
      param_1[10] = param_1[10] + -1;
      FUN_002bea70();
      iVar3 = 0;
      iVar4 = extraout_r1;
      if (param_1[10] != 0) {
        iVar3 = param_1[2];
        iVar4 = param_1[4];
      }
      if (param_1[10] == 0 || iVar3 == iVar4) {
        FUN_002be9c8(param_1 + 1);
      }
      FUN_002bd1dc(param_1[0x1a],0);
      *(undefined4 *)(param_1[0x1a] + 0x1c) = 0;
      return;
    }
    puVar1 = (undefined4 *)(*(code *)**(undefined4 **)*param_1)((undefined4 *)*param_1,0x20);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = *param_1;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[7] = 0;
    }
    FUN_002bea70(puVar5);
    param_1[0x1a] = puVar1;
    piVar2 = (int *)(*(code *)**(undefined4 **)*puVar5)((undefined4 *)*puVar5,4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
    }
    param_1[0x1b] = piVar2;
    *piVar2 = *piVar2 + 1;
  }
  return;
}
