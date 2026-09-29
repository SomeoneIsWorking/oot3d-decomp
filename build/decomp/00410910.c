// OoT3D decomp @ 00410910  name=FUN_00410910  size=176

void FUN_00410910(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;

  piVar4 = (int *)(param_1 + -0x3c);
  if (*(char *)(param_1 + -0x34) != '\0') {
    iVar1 = 0;
    do {
      if (iVar1 < 0x10) {
        iVar2 = piVar4[iVar1 + 0x21];
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        uVar3 = *(uint *)(iVar2 + 0x1c);
        bVar6 = uVar3 <= param_2;
        bVar5 = param_2 == uVar3;
        if (!bVar6 || bVar5) {
          bVar6 = param_3 <= uVar3;
          bVar5 = uVar3 == param_3;
        }
        if (!bVar6 || bVar5) {
          (**(code **)(*piVar4 + 0xc))(piVar4);
          break;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    uVar3 = *(uint *)(param_1 + 0xac);
    bVar6 = uVar3 <= param_2;
    bVar5 = param_2 == uVar3;
    if (!bVar6 || bVar5) {
      bVar6 = param_3 <= uVar3;
      bVar5 = uVar3 == param_3;
    }
    if (!bVar6 || bVar5) {
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    uVar3 = *(uint *)(param_1 + 0xb0);
    bVar6 = uVar3 <= param_2;
    bVar5 = param_2 == uVar3;
    if (!bVar6 || bVar5) {
      bVar6 = param_3 <= uVar3;
      bVar5 = uVar3 == param_3;
    }
    if (!bVar6 || bVar5) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    uVar3 = *(uint *)(param_1 + 0xb4);
    bVar6 = uVar3 <= param_2;
    bVar5 = param_2 == uVar3;
    if (!bVar6 || bVar5) {
      bVar6 = param_3 <= uVar3;
      bVar5 = uVar3 == param_3;
    }
    if (!bVar6 || bVar5) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    uVar3 = *(uint *)(param_1 + 0xb8);
    bVar6 = uVar3 <= param_2;
    bVar5 = param_2 == uVar3;
    if (!bVar6 || bVar5) {
      bVar6 = param_3 <= uVar3;
      bVar5 = uVar3 == param_3;
    }
    if (!bVar6 || bVar5) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  return;
}
