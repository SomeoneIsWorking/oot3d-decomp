// OoT3D decomp @ 00405fa0  name=FUN_00405fa0  size=216

void FUN_00405fa0(int param_1,int param_2)

{
  int iVar1;

  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      FUN_0030a0e8(param_1);
      for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
        if (*(char *)(iVar1 + 0xc6) != '\0') {
          FUN_0030a030(iVar1);
        }
      }
      for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
        FUN_0030a3f8(iVar1);
      }
    }
    else {
      if (param_2 != 3) {
        return;
      }
      for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
        FUN_0030a3f8(iVar1);
        FUN_00309fa8(iVar1);
      }
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}
