// OoT3D decomp @ 003f95c8  name=FUN_003f95c8  size=184

void FUN_003f95c8(int param_1)

{
  if ((*(uint *)(param_1 + 0x178) & 2) == 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    func_0x0036c174(param_1 + 0xb4,param_1 + 0x54,param_1 + 0xb4);
    func_0x0036c174(param_1 + 0xb4,param_1 + 0x84,param_1 + 0xb4);
    func_0x0032c78c(param_1 + 0xb4,param_1 + 0x3c,param_1 + 0xb4);
    if ((*(uint *)(param_1 + 0x178) & 8) == 0) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xd4);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0xd8);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xdc);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xe0);
    }
  }
  return;
}
