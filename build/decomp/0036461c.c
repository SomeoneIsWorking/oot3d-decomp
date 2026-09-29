// OoT3D decomp @ 0036461c  name=FUN_0036461c  size=76

void FUN_0036461c(int param_1,int param_2)

{
  FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  if (*(int *)(param_1 + 0x4b4) == DAT_00364668) {
    *(undefined2 *)(param_1 + 0x4b8) = 300;
  }
  else {
    *(undefined2 *)(param_1 + 0x4b8) = 0;
  }
  *(undefined2 *)(param_1 + 0x4ba) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = DAT_0036466c;
  return;
}
