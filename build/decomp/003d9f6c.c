// OoT3D decomp @ 003d9f6c  name=FUN_003d9f6c  size=148

void FUN_003d9f6c(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;

  iVar3 = DAT_003da000 + (uint)*(byte *)(param_1 + 0x1aa) * 0x10;
  iVar3 = FUN_003705a0(*(float *)(param_1 + 0xc) - *(float *)(iVar3 + 8),
                       *(undefined4 *)(iVar3 + 0xc),param_1 + 0x2c);
  if (iVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x1a8);
    if (cVar1 == '\0' || cVar1 == '\x06') {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    uVar4 = DAT_003da004;
    if (cVar1 != '\x05') {
      if (cVar1 == '\x02') {
        uVar2 = 600;
      }
      else if (cVar1 == '\x04') {
        uVar2 = 300;
      }
      else {
        uVar4 = DAT_003da00c;
        if (cVar1 == '\x03') {
          uVar4 = 0xf0;
        }
        uVar2 = (undefined2)uVar4;
      }
      *(undefined2 *)(param_1 + 0x1ac) = uVar2;
      uVar4 = DAT_003da008;
    }
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  }
  return;
}
