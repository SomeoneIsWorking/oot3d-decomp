// OoT3D decomp @ 0047f3f4  name=FUN_0047f3f4  size=100

void FUN_0047f3f4(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;

  bVar2 = (char)param_1[5] != '\0';
  uVar1 = 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)((int)param_1 + 0x16);
  }
  bVar3 = uVar1 != 0;
  if (bVar2 && bVar3) {
    uVar1 = *param_1;
  }
  bVar4 = uVar1 != 0;
  if ((bVar2 && bVar3) && bVar4) {
    uVar1 = param_1[7];
  }
  if ((((bVar2 && bVar3) && bVar4) && uVar1 != 0) && (*(char *)(uVar1 + 0x11) == '\x03')) {
    if ((code *)param_1[3] != (code *)0x0) {
      (*(code *)param_1[3])(param_1,0,param_1[4]);
    }
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  return;
}
