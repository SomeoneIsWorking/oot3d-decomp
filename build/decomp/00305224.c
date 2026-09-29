// OoT3D decomp @ 00305224  name=FUN_00305224  size=260

void FUN_00305224(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (((*DAT_00305328 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00305328), iVar1 != 0)) {
    FUN_0036788c(DAT_0030532c);
  }
  uVar2 = *(undefined4 *)(DAT_00305338 + 0x47c);
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00348904(uVar2);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_00348904(uVar2);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_003051cc(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar2 = DAT_0030533c;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  *(undefined1 *)(param_1 + 0xa3) = 0xff;
  *(undefined1 *)(param_1 + 0xa2) = 0xff;
  *(undefined1 *)(param_1 + 0xa1) = 0xff;
  *(undefined1 *)(param_1 + 0xa0) = 0xff;
  *(undefined1 *)(param_1 + 0xaf) = 0xcc;
  return;
}
