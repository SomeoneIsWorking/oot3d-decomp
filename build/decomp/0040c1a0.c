// OoT3D decomp @ 0040c1a0  name=FUN_0040c1a0  size=392

undefined4 * FUN_0040c1a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [4];

  *param_1 = DAT_0040c328;
  if (param_1[7] != 0) {
    local_1c = param_1[0x11];
    local_18 = *(undefined4 *)(local_1c + 8);
    FUN_00304a60(auStack_14,param_1 + 0xc,&local_18,&local_1c);
    FUN_003049b0(param_1 + 0x14);
    param_1[2] = 0;
    param_1[9] = 0x40;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)((int)param_1 + 0x2d) = 0;
  }
  puVar3 = (undefined4 *)param_1[0x16];
  for (puVar2 = (undefined4 *)param_1[0x15]; puVar2 != puVar3; puVar2 = puVar2 + 3) {
    iVar1 = *(int *)puVar2[2] + -1;
    *(int *)puVar2[2] = iVar1;
    if (iVar1 == 0) {
      if ((undefined4 *)puVar2[1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar2[1])();
        (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2,puVar2[1]);
      }
      (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2,puVar2[2]);
    }
  }
  (**(code **)(*(int *)param_1[0x14] + 4))((int *)param_1[0x14],param_1[0x15]);
  local_1c = param_1[0x11];
  puVar2 = param_1 + 0xc;
  if (local_1c != 0) {
    local_18 = *(undefined4 *)(local_1c + 8);
    FUN_00304a60(auStack_14,puVar2,&local_18,&local_1c);
    iVar1 = param_1[0x11];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0xe];
    param_1[0xe] = iVar1;
    puVar3 = (undefined4 *)param_1[0xd];
    while (puVar3 != (undefined4 *)0x0) {
      param_1[0xd] = *puVar3;
      (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2,puVar3[2]);
      (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2,puVar3);
      puVar3 = (undefined4 *)param_1[0xd];
    }
  }
  return param_1;
}
