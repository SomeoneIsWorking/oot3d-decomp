// OoT3D decomp @ 00309000  name=FUN_00309000  size=256

undefined4 FUN_00309000(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;

  uVar2 = 0;
  if (*(char *)((int)param_1 + 5) != '\0') {
    if ((short)param_1[0x1c] < *(short *)((int)param_1 + 0x6e)) {
      *(short *)(param_1 + 0x1c) = (short)param_1[0x1c] + 1;
    }
    if (*(short *)((int)param_1 + 0x76) < (short)param_1[0x1d]) {
      *(short *)((int)param_1 + 0x76) = *(short *)((int)param_1 + 0x76) + 1;
    }
    if ((short)param_1[0x1f] < *(short *)((int)param_1 + 0x7a)) {
      *(short *)(param_1 + 0x1f) = (short)param_1[0x1f] + 1;
    }
    if (*(short *)((int)param_1 + 0x82) < (short)param_1[0x20]) {
      *(short *)((int)param_1 + 0x82) = *(short *)((int)param_1 + 0x82) + 1;
    }
    if (*(char *)((int)param_1 + 0x4a) != '\0') {
      if (param_1[0x31] != 0) {
        return 1;
      }
      *(undefined1 *)((int)param_1 + 0x4a) = 0;
    }
    iVar1 = param_1[0x11];
    if (0 < iVar1) {
      iVar1 = iVar1 + -1;
      param_1[0x11] = iVar1;
    }
    if ((0 < iVar1) || (param_1[8] == 0)) {
      return 1;
    }
    do {
      uVar3 = param_1[0x11];
      bVar4 = uVar3 == 0;
      if (bVar4) {
        uVar3 = (uint)*(byte *)((int)param_1 + 0x4a);
      }
      if (!bVar4 || uVar3 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2);
    } while (iVar1 != 1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
