// OoT3D decomp @ 00436304  name=FUN_00436304  size=16

int FUN_00436304(int param_1,undefined1 param_2)

{
  char cVar1;

  cVar1 = *(char *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return (int)cVar1;
}
