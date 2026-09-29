// OoT3D decomp @ 002bd6ac  name=FUN_002bd6ac  size=96

undefined4 * FUN_002bd6ac(undefined4 *param_1)

{
  int iVar1;

  iVar1 = *(int *)param_1[2] + -1;
  *(int *)param_1[2] = iVar1;
  if (iVar1 == 0) {
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])();
      (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_1[1]);
    }
    (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_1[2]);
  }
  return param_1;
}
