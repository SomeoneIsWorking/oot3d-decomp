// OoT3D decomp @ 004bb4c0  name=FUN_004bb4c0  size=308

void FUN_004bb4c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
  if (iVar4 != *(int *)(param_1 + 0x44)) {
    do {
      iVar6 = *(int *)(iVar4 + 0x18);
      if (*(int *)(iVar6 + 0x68) != 0) {
        iVar1 = *(int *)(iVar6 + 0x28);
        bVar7 = iVar1 != 0;
        if (bVar7) {
          iVar1 = *(int *)(iVar6 + 0x18);
          param_2 = *(int *)(iVar6 + 0x20);
        }
        if (!bVar7 || iVar1 == param_2) {
          FUN_002beafc(iVar6 + 4);
        }
        puVar2 = *(undefined4 **)(iVar6 + 0x18);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)(iVar6 + 100);
          puVar2[1] = *(undefined4 *)(iVar6 + 0x68);
          piVar3 = *(int **)(iVar6 + 0x6c);
          puVar2[2] = piVar3;
          *piVar3 = *piVar3 + 1;
        }
        *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 0xc;
        *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + 1;
        FUN_002bea70((undefined4 *)(iVar6 + 100));
        *(undefined4 *)(iVar6 + 0x68) = 0;
        puVar2 = *(undefined4 **)(undefined4 *)(iVar6 + 100);
        piVar3 = (int *)(**(code **)*puVar2)(puVar2,4);
        if (piVar3 != (int *)0x0) {
          *piVar3 = 0;
        }
        *(int **)(iVar6 + 0x6c) = piVar3;
        *piVar3 = *piVar3 + 1;
      }
      iVar6 = *(int *)(iVar4 + 0xc);
      iVar1 = iVar4;
      if (*(int *)(iVar4 + 0xc) == 0) {
        do {
          iVar5 = iVar1;
          iVar1 = *(int *)(iVar5 + 4);
        } while (iVar5 == *(int *)(iVar1 + 0xc));
        if (*(int *)(iVar5 + 0xc) != iVar1) {
          iVar5 = iVar1;
        }
      }
      else {
        do {
          iVar5 = iVar6;
          iVar6 = *(int *)(iVar5 + 8);
        } while (*(int *)(iVar5 + 8) != 0);
      }
      param_2 = iVar4;
      iVar4 = iVar5;
    } while (iVar5 != *(int *)(param_1 + 0x44));
  }
  return;
}

