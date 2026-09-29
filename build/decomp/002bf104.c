// OoT3D decomp @ 002bf104  name=FUN_002bf104  size=360

void FUN_002bf104(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;

  iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
  if (iVar4 != *(int *)(param_1 + 0x44)) {
    do {
      iVar5 = *(int *)(iVar4 + 0x18);
      iVar1 = *(int *)(iVar5 + 0x68);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 4)) {
          if (*(int *)(iVar1 + 0x1c) == 1) {
            *(undefined4 *)(iVar1 + 0x1c) = 2;
          }
        }
        else {
          iVar1 = 1 - *(uint *)(iVar5 + 0x58);
          if (1 < *(uint *)(iVar5 + 0x58)) {
            iVar1 = 0;
          }
          if ((iVar1 != 0) || (*(int *)(iVar5 + 0x48) == *(int *)(iVar5 + 0x50))) {
            FUN_002beafc(iVar5 + 0x34);
          }
          puVar2 = *(undefined4 **)(iVar5 + 0x48);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *(undefined4 *)(iVar5 + 100);
            puVar2[1] = *(undefined4 *)(iVar5 + 0x68);
            piVar3 = *(int **)(iVar5 + 0x6c);
            puVar2[2] = piVar3;
            *piVar3 = *piVar3 + 1;
          }
          *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 0xc;
          *(int *)(iVar5 + 0x58) = *(int *)(iVar5 + 0x58) + 1;
          FUN_002bea70((undefined4 *)(iVar5 + 100));
          *(undefined4 *)(iVar5 + 0x68) = 0;
          puVar2 = *(undefined4 **)(iVar5 + 100);
          piVar3 = (int *)(**(code **)*puVar2)(puVar2,4);
          if (piVar3 != (int *)0x0) {
            *piVar3 = 0;
          }
          *(int **)(iVar5 + 0x6c) = piVar3;
          *piVar3 = *piVar3 + 1;
        }
      }
      iVar1 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        do {
          iVar5 = iVar4;
          iVar1 = *(int *)(iVar5 + 4);
          iVar4 = iVar1;
        } while (iVar5 == *(int *)(iVar1 + 0xc));
        iVar4 = iVar5;
        if (*(int *)(iVar5 + 0xc) != iVar1) {
          iVar4 = iVar1;
        }
      }
      else {
        do {
          iVar4 = iVar1;
          iVar1 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    } while (iVar4 != *(int *)(param_1 + 0x44));
  }
  return;
}
