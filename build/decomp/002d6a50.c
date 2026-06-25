// OoT3D decomp @ 002d6a50  name=FUN_002d6a50  size=444

undefined4 FUN_002d6a50(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  
  iVar5 = param_2;
  if ((*(ushort *)((int)param_1 + 0x5e) & 2) != 0) {
    FUN_0049fa58(param_1);
    iVar5 = extraout_r1;
  }
  if ((*(ushort *)((int)param_1 + 0x5e) & 4) != 0) {
    FUN_0049fa58(param_1 + 0xb);
    iVar5 = extraout_r1_00;
  }
  uVar1 = DAT_002d6c0c;
  piVar3 = (int *)param_1[0x1b];
  if (piVar3 == (int *)0x0) {
    iVar5 = param_1[0x1c];
  }
  if (piVar3 != (int *)0x0 || iVar5 != 0) {
    if (param_2 == 0) {
      if (param_1[0x20] != 0) {
        *(undefined4 *)(param_1[0x20] + 0x7c) = param_1[0x1f];
      }
      if (param_1[0x1f] != 0) {
        *(undefined4 *)(param_1[0x1f] + 0x80) = param_1[0x20];
      }
      param_1[0x20] = 0;
      param_1[0x1f] = 0;
      *(undefined *)((int)param_1 + 99) = 0x25;
      param_1[8] = uVar1;
      param_1[7] = uVar1;
      param_1[6] = uVar1;
      param_1[5] = uVar1;
      param_1[4] = uVar1;
      param_1[3] = uVar1;
      param_1[0xd] = uVar1;
      param_1[0xc] = uVar1;
      param_1[0xb] = uVar1;
      param_1[2] = uVar1;
      param_1[1] = uVar1;
      *param_1 = uVar1;
      *(undefined2 *)(param_1 + 0x18) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x5e) = 0;
      *(undefined *)((int)param_1 + 0x62) = 0x80;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      puVar4 = param_1 + 0x11;
      iVar5 = 6;
      *(undefined2 *)(param_1 + 0x11) = 0;
      do {
        *(undefined2 *)((int)puVar4 + 2) = 0;
        iVar5 = iVar5 + -1;
        puVar4 = puVar4 + 1;
        *(undefined2 *)puVar4 = 0;
        iVar2 = DAT_002d6c10;
      } while (iVar5 != 0);
      param_1[0x19] = 0;
      param_1[0x20] = 0;
      param_1[0x1f] = 0;
      if (param_1 != (undefined4 *)0x0) {
        param_1[0x20] = *(undefined4 *)(iVar2 + 0x80);
        param_1[0x1f] = iVar2;
      }
      if (*(int *)(iVar2 + 0x80) != 0) {
        *(undefined4 **)(*(int *)(iVar2 + 0x80) + 0x7c) = param_1;
      }
      *(undefined4 **)(iVar2 + 0x80) = param_1;
      return 1;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
      param_1[0x1b] = 0;
    }
    if (param_1[0x1c] != 0) {
      FUN_002d5ac4();
      FUN_0034fc6c(param_1[0x1c]);
      param_1[0x1c] = 0;
    }
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 0x7c) = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 0x80) = param_1[0x20];
  }
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  FUN_002d5a28(param_1);
  iVar5 = DAT_002d6c14;
  if (param_1 != (undefined4 *)0x0) {
    param_1[0x20] = *(undefined4 *)(DAT_002d6c14 + 0x80);
    param_1[0x1f] = iVar5;
  }
  if (*(int *)(iVar5 + 0x80) != 0) {
    *(undefined4 **)(*(int *)(iVar5 + 0x80) + 0x7c) = param_1;
  }
  *(undefined4 **)(iVar5 + 0x80) = param_1;
  return 0;
}

