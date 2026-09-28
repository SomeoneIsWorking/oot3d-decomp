// OoT3D decomp @ 00341ae4  name=FUN_00341ae4  size=124

undefined4 FUN_00341ae4(float param_1,float param_2,float param_3,int param_4,short *param_5)

{
  char cVar1;
  undefined1 in_ZR;
  bool bVar2;
  int in_fpscr;

  while( true ) {
    bVar2 = false;
    if ((bool)in_ZR) {
      bVar2 = (bool)((byte)((uint)in_fpscr >> 0x1e) & 1);
    }
    if (bVar2) break;
    param_5 = *(short **)(param_5 + 0x98);
    if (param_5 == (short *)0x0) {
      cVar1 = *(char *)(param_4 + 0x82d);
      if ((cVar1 != '\0') && (*(char *)(param_4 + 0x82d) = cVar1 + -1, cVar1 != '\x01')) {
        return 1;
      }
      return 0;
    }
    bVar2 = false;
    if (*param_5 == 0x1a0) {
      in_fpscr = (uint)(param_1 == *(float *)(param_5 + 4)) << 0x1e;
      bVar2 = SUB41((uint)in_fpscr >> 0x1e,0);
    }
    in_ZR = false;
    if (bVar2) {
      in_fpscr = (uint)(param_2 == *(float *)(param_5 + 6)) << 0x1e;
      in_ZR = (undefined1)((uint)in_fpscr >> 0x1e);
    }
    if ((bool)in_ZR) {
      in_fpscr = (uint)(param_3 == *(float *)(param_5 + 8)) << 0x1e;
    }
  }
  return 1;
}
