// OoT3D decomp @ 003049b0  name=FUN_003049b0  size=172

void FUN_003049b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar4;
  if (puVar4 != puVar3) {
    for (; puVar1 != puVar3; puVar1 = puVar1 + 3) {
      iVar2 = *(int *)puVar1[2] + -1;
      *(int *)puVar1[2] = iVar2;
      if (iVar2 == 0) {
        if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)puVar1[1])();
          (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1,puVar1[1]);
        }
        (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1,puVar1[2]);
      }
    }
    iVar2 = (int)((ulonglong)((longlong)DAT_00304a5c * (longlong)((int)puVar3 - (int)puVar4)) >>
                 0x20);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + ((iVar2 >> 1) - (iVar2 >> 0x1f)) * -0xc;
  }
  return;
}
