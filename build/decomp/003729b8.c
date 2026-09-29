// OoT3D decomp @ 003729b8  name=FUN_003729b8  size=48

void FUN_003729b8(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;

  iVar1 = DAT_00372a5c;
  *(char *)(param_1 + 0xa15) = (char)param_2;
  *(undefined4 *)(param_1 + 0x9ac) = *(undefined4 *)(iVar1 + param_2 * 4);
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 9:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    uVar2 = 0;
    break;
  default:
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xa17) = uVar2;
  return;
}
