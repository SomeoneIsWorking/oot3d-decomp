// OoT3D decomp @ 0048b53c  name=FUN_0048b53c  size=124

void FUN_0048b53c(int *param_1)

{
  char cVar1;
  undefined4 uVar2;

  (**(code **)(*param_1 + 4))(param_1);
  uVar2 = FUN_00306994();
  cVar1 = (char)param_1[3];
  if ((((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x06') && cVar1 != '\a') &&
      cVar1 != '\x01') {
    (**(code **)(*(int *)param_1[6] + 4))();
    FUN_003067e4(uVar2);
    *(undefined1 *)(param_1 + 3) = 6;
    param_1[4] = -1;
  }
  return;
}
