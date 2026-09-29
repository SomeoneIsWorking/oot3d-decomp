// OoT3D decomp @ 0048c338  name=FUN_0048c338  size=48

undefined4 FUN_0048c338(int param_1)

{
  char cVar1;

  cVar1 = *(char *)(param_1 + 0xc);
  if (((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x06') || cVar1 == '\a') {
    return 1;
  }
  return 0;
}
