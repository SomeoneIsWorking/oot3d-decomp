// OoT3D decomp @ 00384388  name=FUN_00384388  size=368

void FUN_00384388(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_10 [4];

  if (((*(uint *)(DAT_003844f8 + 8) & 1) == 0) && (iVar3 = FUN_003679b4(DAT_003844fc), iVar3 != 0))
  {
    FUN_00350820(DAT_00384500,DAT_00384504,0x28,0x20);
  }
  puVar1 = DAT_00384508;
  *DAT_00384508 = (short)(int)*param_3;
  puVar1[1] = (short)(int)param_3[1];
  uVar2 = DAT_0038450c;
  puVar1[2] = (short)(int)param_3[2];
  *(undefined4 *)(puVar1 + 0x28a) = 5;
  *(undefined4 *)(puVar1 + 0x28c) = 5;
  *(undefined1 *)(puVar1 + 0x28e) = 10;
  *(undefined1 *)((int)puVar1 + 0x51d) = 200;
  *(undefined1 *)(puVar1 + 0x28f) = 10;
  *(undefined1 *)((int)puVar1 + 0x51f) = 0xff;
  *(undefined1 *)(puVar1 + 0x290) = 0;
  *(undefined1 *)((int)puVar1 + 0x521) = 0x80;
  *(undefined1 *)(puVar1 + 0x291) = 0;
  *(undefined1 *)((int)puVar1 + 0x523) = 0xff;
  *(undefined1 *)(puVar1 + 0x292) = 0;
  *(undefined1 *)((int)puVar1 + 0x525) = 0x80;
  *(undefined1 *)(puVar1 + 0x293) = 0;
  *(undefined1 *)((int)puVar1 + 0x527) = 0xff;
  *(undefined1 *)(puVar1 + 0x294) = 0;
  *(undefined1 *)((int)puVar1 + 0x529) = 0x80;
  *(undefined1 *)(puVar1 + 0x295) = 0;
  *(undefined1 *)((int)puVar1 + 0x52b) = 0xff;
  *(undefined1 *)(puVar1 + 0x296) = 0;
  *(undefined1 *)((int)puVar1 + 0x52d) = 0x20;
  *(undefined1 *)(puVar1 + 0x297) = 0;
  *(undefined1 *)((int)puVar1 + 0x52f) = 0;
  *(undefined1 *)(puVar1 + 0x298) = 0;
  *(undefined1 *)((int)puVar1 + 0x531) = 0x20;
  *(undefined1 *)(puVar1 + 0x299) = 0;
  *(undefined1 *)((int)puVar1 + 0x533) = 0;
  *(undefined1 *)(puVar1 + 0x29a) = 0;
  *(undefined1 *)((int)puVar1 + 0x535) = 0x40;
  *(undefined1 *)(puVar1 + 0x29b) = 0;
  *(undefined1 *)((int)puVar1 + 0x537) = 0;
  *(undefined1 *)(puVar1 + 0x29c) = 0;
  *(undefined1 *)((int)puVar1 + 0x539) = 0x40;
  *(undefined1 *)(puVar1 + 0x29d) = 0;
  *(undefined1 *)((int)puVar1 + 0x53b) = 0;
  *(undefined4 *)(puVar1 + 0x29e) = 0;
  *(undefined4 *)(puVar1 + 0x2a0) = 0x10;
  *(undefined4 *)(puVar1 + 0x286) = uVar2;
  *(undefined4 *)(puVar1 + 0x288) = DAT_00384510;
  FUN_00350660(param_1,auStack_10,0,0,1,puVar1);
  return;
}
