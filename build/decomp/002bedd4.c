// OoT3D decomp @ 002bedd4  name=FUN_002bedd4  size=264

void FUN_002bedd4(int **param_1)

{
  int *piVar1;
  uint uVar2;
  int **ppiVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = param_1[2];
  if (piVar1 == (int *)0x0) {
    piVar1 = param_1[3];
    if (piVar1 == param_1[4]) {
      if (param_1[1] == (int *)0x0) {
        piVar5 = (int *)&Reserved2;
      }
      else {
        uVar2 = param_1[1][1];
        piVar5 = (int *)(uVar2 + (uVar2 >> 1) + (uVar2 >> 3));
        if (piVar5 < (int *)(uVar2 + 0x20)) {
          piVar5 = (int *)(uVar2 + 0x20);
        }
      }
      piVar1 = *param_1;
      ppiVar3 = (int **)(**(code **)*piVar1)(piVar1,0xc);
      if (ppiVar3 == (int **)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1,s_MoLiveAllocator__not_enough_memo_002beedc,0xc);
      }
      piVar1 = *param_1;
      piVar4 = (int *)(**(code **)*piVar1)();
      if (piVar4 == (int *)0x0) {
        (**(code **)(*piVar1 + 8))
                  (piVar1,s_MoLiveAllocator__not_enough_memo_002beedc,(int)piVar5 << 5);
      }
      ppiVar3[2] = piVar4;
      *ppiVar3 = param_1[1];
      ppiVar3[1] = piVar5;
      param_1[1] = (int *)ppiVar3;
      piVar1 = ppiVar3[2];
      param_1[4] = piVar1 + (int)piVar5 * 8;
      param_1[3] = piVar1 + 8;
    }
    else {
      param_1[3] = piVar1 + 8;
    }
  }
  else {
    param_1[2] = (int *)piVar1[3];
  }
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  *(undefined *)piVar1 = 0;
  return;
}

