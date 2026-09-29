// OoT3D decomp @ 00466798  name=FUN_00466798  size=204

void FUN_00466798(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uStack_18;

  uStack_18 = param_4;
  while( true ) {
    FUN_0030af40(&uStack_18,param_1 + 0x2c);
    piVar1 = (int *)FUN_002d33cc(param_1,2,1);
    if (((piVar1 == (int *)0x0) && (piVar1 = (int *)FUN_002d33cc(param_1,1), piVar1 == (int *)0x0))
       && (piVar1 = (int *)FUN_002d33cc(param_1,0,1), piVar1 == (int *)0x0)) {
      FUN_0030aedc(&uStack_18);
      piVar1 = (int *)0x0;
    }
    else {
      FUN_0030aedc(&uStack_18);
    }
    if (piVar1 == (int *)0x0) break;
    *(int **)(param_1 + 0x24) = piVar1;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined1 *)(piVar1 + 4) = 3;
    FUN_00310148(piVar1 + 3);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}
