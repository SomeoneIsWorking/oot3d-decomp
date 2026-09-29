// OoT3D decomp @ 00197630  name=FUN_00197630  size=160

void FUN_00197630(int param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;

  pbVar3 = pbRam001976d4;
  *(undefined4 *)(param_1 + 0x2c) = uRam001976d0;
  bVar4 = *pbVar3;
  cVar1 = *(char *)(param_1 + 0x1c0);
  if (bVar4 != 0x3f) {
    if (iRam001976e0 < *(int *)(param_1 + 0x98)) {
      if (cVar1 == '\x01') {
        bVar2 = 0x10;
      }
      else {
        bVar2 = (byte)(1 << (uint)*(byte *)(param_1 + 0x1c1));
      }
      bVar4 = bVar4 | bVar2;
    }
    else if (cVar1 == '\x01') {
      bVar4 = bVar4 & 0xef;
    }
    else {
      bVar4 = bVar4 & ~(byte)(1 << (uint)*(byte *)(param_1 + 0x1c1));
    }
    *pbVar3 = bVar4;
    return;
  }
  if (cVar1 == '\x01') {
    FUN_00371808(param_2,uRam001976d8,0x41,0,0);
  }
  *(undefined2 *)(param_1 + 0x1c4) = 0x44;
  *(undefined4 *)(param_1 + 0x1bc) = uRam001976dc;
  return;
}
