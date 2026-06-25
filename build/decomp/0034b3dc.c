// OoT3D decomp @ 0034b3dc  name=FUN_0034b3dc  size=280

void FUN_0034b3dc(float param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  
  FUN_0036055c(param_4,param_2,DAT_0034b4f4,1);
  if (param_3 != -1) {
    FUN_00358dfc(DAT_0034b4f8,param_2 + 0x254,param_4,param_3);
  }
  iVar2 = DAT_0034b500;
  *(float *)(param_2 + 100) = param_1 * *(float *)(DAT_0034b4fc + 0x2c);
  *(ushort *)(param_2 + 0x90) = *(ushort *)(param_2 + 0x90) & 0xfffe;
  *(undefined *)(param_2 + 0x227f) = 0;
  if (*(char *)(param_2 + 0x1a7) != '\x01') {
    iVar2 = *(int *)(param_2 + 0x228c) + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf6) +
            0x1000011;
    cVar1 = *(char *)(DAT_0034b504 + 0x80);
    if ((cVar1 == ';' || cVar1 == '<') || cVar1 == '=') {
      FUN_0036f59c(param_2,DAT_0034b508);
    }
  }
  FUN_0036f59c(param_2,iVar2);
  if (*(char *)(param_2 + 2) == '\x02') {
    FUN_0036f59c(param_2,(uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4) + param_5);
  }
  else {
    FUN_0036aeb4(param_2 + 0x28,param_5);
  }
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x40000;
  return;
}

